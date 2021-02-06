# hyperion
Hyperion est une librairie qui permet d'ajouter certaine fonctions et procédures basiques à un projet en c. Elle dispose principalement d'outils simplifiant la saisie ou l'affichage.

clear :
procédure effaçant l'affichage du terminal
exemple : "clear();"

pause :
procédure qui met en pause le programme
le programme continue son action lorsque la touche entrée est pressée
exemple : "pause();"

ask :
fonction pour demander un entier de manière sécurisée, compris entre un minimum et un maximum
exemple : "ask("Quel est votre choix : ",0,10);"

numberMenu :
procédure affichant les options d'un menu en numérotant les options
exemple : "number_menu("Menu :","Option 1;Option 2;Option 3;Option 4");"

choiceMenu :
fonction qui retourne le numéro associé au choix d'un utilisateur parmi plusieurs options
la fonction efface le terminal pour actuliser l'affichage
pour selectionner une option, l'utilisateur se sert des flèches directionnelles et de la touche Entrée
exemple : "choice_menu("Menu :","Option 1;Option 2;Option 3;Option 4");"

keyPress()
fonction qui détecte si une touche a été préssée et retourne le charactère correspondand sans arreter le programme
exemple : "printf("%c",keyPress());"
