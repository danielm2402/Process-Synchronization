# Basic examples of process synchronization

_This repository contains 3 examples of process synchronization_
## Starting 🚀

_You can clone the repository to start_

See **LIST** to see a general list of what you will find.


### Requirements 📋

_To run any example you only need C compiler_


## Built with 🛠️

* [GCC](https://gcc.gnu.org/)

## Contributions 🖇️

There will be no contributions from other people directly to this repository, but feel free to send me suggestions, corrections or whatever you see fit.


## List

* Semaphore - (/Semaphore)
* Mutex (/mutex)
* Busy waiting (/busyWaiting)


## SPANISH

### Semáforo binario vs Semáforo múltiple

|   | Binario  | Multiple  |
|---|---|---|
| variable  |  Solo puede tomar valores entre 0 (ocupad) y 1 (libre) |  Puede tomar cualquier valor entero |
|  hilos | Permite solo a un hilo acceder a un recurso a la vez  |  Permite a n hilos acceder a la vez |


_Se puede llegar a pensar que un Semáforo binario es igual a un Mutex, pero esto no es así_

* Un mutex sólo puede ser liberado por el subproceso que bloqueó (Hay propiedad)
* Un semáforo binario puede cambiar su estado por cualquier subproceso (No hay propiedad)
* Un mutex protege recursos
* Un semáforo binario no protege recursos, sólo da una señal


---
made with ❤️ _by [danielm2402](https://github.com/danielm2402)_ 😊
