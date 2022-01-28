import pygame
from pygame.sprite import Group, GroupSingle, groupcollide

UP = 0, -1
DOWN = 0, 1

class GameObject(pygame.sprite.Sprite):
    def __init__(self, key, type, position):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load('data/{}/{}.png'.format(type, key)).convert_alpha()
        self.rect = pygame.Rect(position[0], position[1], self.image.get_rect().size[0], self.image.get_rect().size[1])
    
    def setPosition(self, position):
        self.rect.x = position[0]
        self.rect.y = position[1]

    def touchingRightBorder(self):
        if(self.rect.right >= 640):
            return True
        return False

    def touchingLeftBorder(self):    
        if(self.rect.left <= 0):
            return True
        return False

    def getPosition(self):
        return (self.rect.x, self.rect.y)

    def draw(self, surface):
        surface.blit(self.image, (self.rect.x, self.rect.y))

    def move(self):
        GameObject.setPosition(self, (self.rect.x + self.speed[0], self.rect.y + self.speed[1]))

class Shot(GameObject):
    def __init__(self, key, position, direction, speed, damage = 1):
        GameObject.__init__(self, key, 'shots', position)
        self.damage = damage
        self.speed = (speed * direction[0], speed * direction[1])

        if(direction == DOWN):
            self.image = pygame.transform.rotate(self.image, 180)

    def checkOutOfBorder(self):
        if(self.rect.bottom < 0 or self.rect.top > 480):
            self.kill()

    def do(self):
        self.move()
        self.checkOutOfBorder()

class Entity(GameObject):
    def __init__(self, key, position, shot_key, shot_speed, life, damage, speed):
        GameObject.__init__(self, key, 'entities', position)
        self.abs_speed = speed
        self.speed = (0, 0)
        self.life = life
        self.shots = Group()
        self.damage = damage

        self.shot_key = shot_key
        self.shot_speed = shot_speed

    def setSpeed(self, direction):
        self.speed = (direction[0] * self.abs_speed, direction[1] * self.abs_speed)
 
    def shoot(self):
        temp_image = pygame.image.load('data/shots/{}.png'.format(self.shot_key)).convert_alpha()
        position = (self.rect.x + self.rect.width/2 - temp_image.get_rect().width/2, self.rect.y)
        shot = Shot(self.shot_key, position, self.shot_direction, self.shot_speed)
        self.shots.add(shot)

    def update(self):
        if self.life <= 0:
            self.kill()

        GameObject.update(self)
        for shot in self.shots:
            shot.update()

    def draw(self, surface):
        GameObject.draw(self, surface)
        for shot in self.shots:
            shot.draw(surface)

    def do(self):
        self.move()
        self.speed = (0, 0)

        for shot in self.shots:
            shot.do()

class Player(Entity):
    def __init__(self, key, position, shot_key = '1', shot_speed = 4, life = 10, damage = 4, speed = 6, score = 0, attack_interval=450):
        Entity.__init__(self, key, position, shot_key, shot_speed, life, damage, speed)
        self.score = score
        self.shot_direction = (0, -1)
        self.attack_interval = attack_interval
        self.millis_since_last_attack = attack_interval #can attack in the beginning

    def update_attack_clock(self, clock):
        self.millis_since_last_attack += clock.get_time()

    def attempt_shoot(self, clock):
        if self.millis_since_last_attack >= self.attack_interval:
            self.shoot()
            self.millis_since_last_attack = 0
            return True

class Monster(Entity):
    def __init__(self, key, position, shot_key, shot_speed, life = 10, damage = 2, value = 1, speed = 2):
        Entity.__init__(self, key, position, shot_key, shot_speed, life, damage, speed)
        self.shot_direction = (0,1)
        self.value = value

class TempEffect(GameObject):
    """A GameObject which has a temporary lifespan on the screen"""
    def __init__(self, key, type, position, lifespan_millis=400):
        GameObject.__init__(self, key, type, position)
        self.lifespan_millis = lifespan_millis
        self.time_elapsed = 0

    def update_time(self, clock):
        self.time_elapsed += clock.get_time()

    def is_dead(self):
        return self.time_elapsed >= self.lifespan_millis

class HealthBar(pygame.sprite.Sprite):
    def __init__(self, player):
        self.player = player
        self.full_health = self.player.life
        pygame.sprite.Sprite.__init__(self)
        self.buffer = pygame.Rect(20, 5, 400, 20)
        self.border = self.buffer.copy().inflate(2, 3)
        self.border.x = 18
        self.border.y = 3.5

    def draw(self, surface):
        self.buffer.width = (400*self.player.life)/self.full_health
        pygame.draw.rect(surface, (192, 192, 192), self.border, 2)
        pygame.draw.rect(surface, (0, 255, 0), self.buffer)
