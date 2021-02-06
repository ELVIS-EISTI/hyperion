/*
    __  __                      _           
   / / / /_  ______  ___  _____(_)___  ____ 
  / /_/ / / / / __ \/ _ \/ ___/ / __ \/ __ \
 / __  / /_/ / /_/ /  __/ /  / / /_/ / / / /
/_/ /_/\__, / .___/\___/_/  /_/\____/_/ /_/ 
      /____/_/                              

Fichier : hyperion.h
Auteur : Hélian CAUMEIL
Date de création : 02/02/2021
Date de modification : 03/02/2021

Description :

Hyperion est une librairie qui permet d'ajouter certaines fonctions et procédures basiques à un projet en c.
Elle dispose principalement d'outils simplifiant la saisie ou l'affichage.
*/

#ifndef HYPERION_H
#define HYPERION_H

void pause();
void clear();
int ask(char text[],int min,int max);
void numberMenu(char title[],char text[]);
int choiceMenu(char title[],char option[]);
char keyPress();

#endif