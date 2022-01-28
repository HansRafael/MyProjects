import pygame

from game.menu import *
from game import *

def main():
    x = 0
    while x != 2:
        WIDTH = 640
        HEIGHT = 480

        pygame.mixer.pre_init(44100, -16, 2, 512)
        pygame.init()

        screen_size = (WIDTH, HEIGHT)
        screen = pygame.display.set_mode(screen_size)
        pygame.display.set_caption("Space Invaders")
        menu = GameMenu('Space Invaders', screen, 60)
        x = menu.run()
        if x == 1:
            stage = Stage(screen, 60)
            stage.start()

main()
