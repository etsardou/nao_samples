# 0. Configure git

You should add the following line to the $PWD/.git/info/exclude:

    */build-local/

in order not to commit the build files.

# 1. Controlling NAO remotely

## 1.1. How to build and run a node

You must follow the instructions [here](http://janebotics.blogspot.gr/2012/12/better-nao-than-never-nao-tutorial-part.html), after registering your NAO in the Aldebaran's website in order to get full access to the content.

To build a node go inside its folder and execute

    qibuild configure -c local
    qibuild make -c local

To execute it remotely (from your PC) on NAO just run

    ./build-local/sdk/bin/NODE_NAME --pip IP_ADDRESS

For the learn_face_node and the CERTH's NAO the command above is

    ./build-local/sdk/bin/learn_face_node --pip 169.254.40.81

## 1.2. Available samples

### 1.2.1. helloworld

NAO just says "Hello world"

### 1.2.2. nao_touch_sensors

Showcases the use of events. NAO speaks when the three tactils or the feet bumpers are pressed.

### 1.2.3. get_up_stand_down

Controlling NAO's posture with vocal commands. The available commands are:

- up : NAO obtains the Stand posture
- sit : NAO obtains the Sit posture
- crouch : NAO obtains the Crouch posture
- exit : Unsubscribes from all the events

### 1.2.4. inertial_monitor

Outputs the X,Y angles of the NAO's posture in the console.

### 1.2.5. search_for_faces

Posture by command and face tracking. Available commands:

- up : NAO obtains the Stand posture
- sit : NAO obtains the Sit posture
- crouch : NAO obtains the Crouch posture
- face : Begins the face tracking (head movement towards the center of the face perceived)
- quit : Unsubscribes from all the events

### 1.2.6. learn_face

Implements the procedure of learning a face. Available commands:

- face : Begins the face tracking (head movement towards the center of the face perceived)
- learn : Tries to learn the face in front of it. It waits for the name of this face as console input.
- quit : Unsubscribes from all the events
