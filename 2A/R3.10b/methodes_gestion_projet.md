# Méthodes de gestion de projet

## 1. Intégration Continue (CI)

### Ce que c'est

L'intégration continue (Continuous Integration) est une pratique de
développement logiciel consistant à intégrer fréquemment (plusieurs fois
par jour) les modifications du code dans une branche commune du projet.
Chaque intégration est automatiquement testée via des builds et tests
automatisés.

### L'optique visée

-   Détecter rapidement les erreurs d'intégration.
-   Maintenir un code source toujours fonctionnel.
-   Réduire les conflits liés au travail en parallèle des équipes.

### Outils utilisés

-   **Agile / Scrum** : permet d'intégrer la CI dans un cycle itératif
    avec des sprints courts.  
-   **DevOps** : culture de collaboration entre développement et
    exploitation pour fluidifier l'intégration et le déploiement.  

### Avantages et limites

**Avantages :** - Détection rapide des bugs.  
- Automatisation des tests et déploiements.  
- Réduction du temps de mise en production.  

**Limites :** - Mise en place initiale coûteuse en temps.  
- Nécessite une bonne couverture de tests.  
- Peut être complexe pour les projets très vastes.  

------------------------------------------------------------------------

## 2. Test-Driven Development (TDD)

### Ce que c'est

Le Test-Driven Development est une approche de développement dans
laquelle les tests unitaires sont écrits avant le code de la
fonctionnalité. Le cycle classique est :  
**Red → Green → Refactor** (échec du test → écriture du code minimal
pour le réussir → amélioration du code).

### L'optique visée

-   Assurer une meilleure qualité du code.  
-   Forcer les développeurs à clarifier les spécifications avant
    d'écrire le code.  
-   Réduire les bugs en production.

### Outils utilisés

-   **Extreme Programming (XP)** : TDD en est une pratique clé.  
-   **Scrum** : facilite l'intégration du TDD via des itérations courtes
    et l'accent sur la qualité.  
-   **Lean Software Development** : élimination des gaspillages par des
    tests automatisés et ciblés.

### Avantages et limites

**Avantages :** - Amélioration de la robustesse du code.  
- Réduction des régressions.  
- Documentation vivante à travers les tests.

**Limites :** - Courbe d'apprentissage importante.  
- Temps de développement initial plus long.  
- Risque d'écrire des tests trop rigides.

------------------------------------------------------------------------

## 3. Pair Programming

### Ce que c'est

Le Pair Programming (programmation en binôme) est une pratique de
développement agile où deux développeurs travaillent ensemble sur le
même poste de travail :  
- **Driver** : écrit le code.  
- **Navigator** : révise, propose des améliorations, anticipe les
problèmes.

### L'optique visée

-   Améliorer la qualité du code grâce à une relecture instantanée.  
-   Favoriser la diffusion de connaissances dans l'équipe.  
-   Accélérer la résolution des problèmes complexes.

### Outils utilisés

-   **Extreme Programming (XP)** : pratique centrale du cadre XP.  
-   **Scrum** : pair programming peut être intégré dans les sprints pour
    renforcer la qualité.

### Avantages et limites

**Avantages :** - Réduction des bugs.  
- Amélioration des compétences par l'apprentissage mutuel.  
- Meilleure communication dans l'équipe.

**Limites :** - Peut sembler inefficace en termes de temps (2 personnes
pour 1 tâche).  
- Fatigue plus rapide des développeurs.  
- Demande une bonne entente entre les binômes.

## 4. Planning Poker

### Ce que c'est

Le Planning Poker est une technique d'estimation agile utilisée par les
équipes pour évaluer la complexité ou l'effort nécessaire à la
réalisation d'une tâche ou d'une user story. Chaque membre choisit une
carte représentant une estimation, puis les cartes sont révélées
simultanément.

### L'optique visée

-   Obtenir des estimations réalistes grâce à l'intelligence
    collective.  
-   Éviter l'influence hiérarchique ou la pression d'un seul individu.  
-   Stimuler la discussion autour des tâches.

### Outils de gestion de projet associés

-   **Scrum** : planification des sprints.  
-   **Agile en général** : estimation et priorisation des tâches.

### Avantages et limites

**Avantages :** - Encourage la participation de toute l'équipe.  
- Permet d'aligner les visions des développeurs.  
- Favorise la discussion sur les incertitudes du projet.

**Limites :** - Peut être chronophage pour des backlogs volumineux.  
- Risque de débats interminables si mal animé.

------------------------------------------------------------------------

## 5. Timeboxing

### Ce que c'est

Le Timeboxing est une technique de gestion du temps où une durée fixe
est allouée à une activité, indépendamment de son avancement. L'objectif
est de respecter strictement le temps imparti.

### L'optique visée

-   Encourager la concentration et l'efficacité.  
-   Prévenir la dérive des réunions ou tâches.  
-   Prioriser l'essentiel sur le perfectionnisme.

### Outils de gestion de projet associés

-   **Scrum** : sprints et cérémonies (daily, rétrospectives).  
-   **Kanban** : gestion du flux avec limites de temps pour certaines
    tâches.  
-   **Lean** : optimisation du temps et suppression des gaspillages.

### Avantages et limites

**Avantages :** - Respect du calendrier.  
- Discipline collective.  
- Favorise un rythme soutenu et constant.

**Limites :** - Peut générer du stress si les délais sont trop courts.  
- Risque de négliger la qualité au profit du temps.

------------------------------------------------------------------------

## 6. User Stories

### Ce que c'est

Les User Stories sont des descriptions simples et courtes d'une
fonctionnalité du point de vue de l'utilisateur final. Formulées souvent
ainsi :  
**« En tant que \[utilisateur\], je veux \[objectif\] afin de
\[bénéfice\]. »**

### L'optique visée

-   Centrer le développement sur la valeur utilisateur.  
-   Faciliter la communication entre les parties prenantes et l'équipe
    technique.  
-   Définir des fonctionnalités claires, compréhensibles et testables.

### Outils de gestion de projet associés

-   **Scrum** : backlog produit et planification de sprint.  
-   **Agile** : gestion des besoins utilisateurs.  
-   **Kanban** : suivi de l'avancement des user stories dans le flux.

### Avantages et limites

**Avantages :** - Clarifie les attentes.  
- Encourage le dialogue avec le client.  
- Flexibilité et adaptabilité.

**Limites :** - Trop simplistes pour des projets très complexes.  
- Dépendent fortement d'une bonne rédaction et d'un Product Owner
efficace.

------------------------------------------------------------------------

## 7. Réusinage de code (Refactoring)

### Ce que c'est

Le réusinage de code est l'amélioration du code existant sans en changer
le comportement externe. Cela consiste à simplifier, restructurer ou
optimiser le code pour le rendre plus maintenable.

### L'optique visée

-   Améliorer la lisibilité et la maintenabilité du code.  
-   Réduire la dette technique.  
-   Préparer le code pour de futures évolutions.

### Outils de gestion de projet associés

-   **Extreme Programming (XP)** : le refactoring est une pratique clé.  
-   **Scrum** : intégré dans les sprints pour améliorer la qualité.  
-   **Kanban** : tâches dédiées à l'amélioration continue du code.

### Avantages et limites

**Avantages :** - Amélioration de la qualité logicielle.  
- Réduction des coûts de maintenance à long terme.  
- Facilite l'intégration de nouvelles fonctionnalités.

**Limites :** - Investissement en temps qui peut sembler improductif.  
- Risque d'introduire de nouveaux bugs.  
- Souvent négligé sous la pression des délais.

------------------------------------------------------------------------

## 8. Kanban de tâches

### Ce que c'est

Le Kanban est une méthode visuelle de gestion du travail basée sur des
cartes (tâches) déplacées dans des colonnes représentant les étapes d'un
flux de travail (ex. « À faire », « En cours », « Terminé »).

### L'optique visée

-   Visualiser l'avancement des tâches.  
-   Limiter le travail en cours (WIP).  
-   Améliorer la fluidité et l'efficacité du flux de production.

### Outils de gestion de projet associés

-   **Méthode Kanban** : cœur même de cette pratique.  
-   **Scrum-ban** : combinaison de Scrum et Kanban pour plus de
    flexibilité.  
-   **Lean** : amélioration continue et élimination des gaspillages.

### Avantages et limites

**Avantages :** - Grande visibilité sur le travail en cours.
- Flexibilité et adaptation facile.  
- Mise en évidence des blocages rapidement.

**Limites :** - Peut devenir confus avec un trop grand nombre de
tâches.  
- Demande une discipline rigoureuse pour rester efficace.  
- Moins structuré que Scrum pour des projets complexes.
