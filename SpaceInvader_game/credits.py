#!/usr/bin/python
import pygame
from pygame.locals import *

pygame.init()
pygame.display.set_caption('End credits')
screen = pygame.display.set_mode((640, 480))
screen_r = screen.get_rect()
font = pygame.font.SysFont("data/fonts/spaceranger.ttf", 40)
clock = pygame.time.Clock()

def main():

    credit_dict = {}

    for i in credit_dict.values():
        credit_dict.key(i) = pygame.image.load('data/credits/{}.png').format(credit_dict.key(i)).convert_alpha()
    while True:
        for e in pygame.event.get():
            if e.type == QUIT or e.type == KEYDOWN and e.key == pygame.K_ESCAPE:
                return

        screen.fill((255, 255, 255))

        for r, s in texts:
            # now we just move each rect by one pixel each frame
            r.move_ip(0, -1)
            # and drawing is as simple as this
            screen.blit(s, r)

        # if all rects have left the screen, we exit
        if not screen_r.collidelistall([r for (r, _) in texts]):
            return

        # only call this once so the screen does not flicker
        pygame.display.flip()

        # cap framerate at 60 FPS
        clock.tick(60)

if __name__ == '__main__': 
    main()