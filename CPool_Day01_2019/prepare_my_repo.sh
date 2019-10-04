#!/bin/sh
blih -u lucien.sigayret@epitech.eu repository create $1
blih -u lucien.sigayret@epitech.eu repository setacl $1 ramassage-tek r
blih -u lucien.sigayret@epitech.eu repository getacl $1 
