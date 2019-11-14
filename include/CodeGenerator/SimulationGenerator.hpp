//
//  SimulationGenerator.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef CodeGenerator_SimulationGenerator_hpp
#define CodeGenerator_SimulationGenerator_hpp

#include "CodeGenerator.hpp"
namespace esc {
    class SimulationGenerator : public CodeGenerator{
        private:
            //-----HeaderFile-----
            std::string generateHeaderFile(const Process* proc){
                // 1. generate libs used
                // 2. include generated headfiles
                // 3. generate communication components
                this->generateCommunications(proc);
                // 4. write to h file
            }

            std::string generateCommunications(const Process* proc){
                // generate communication things
            }
            //-----CFile-----
            //-----Pragmas-----
            std::string generatePragmas(const FiniteStateMachine* fsm){
                // 1. other pragmas
                // TODO
                // 2. generate state defines
                this->generateStateDefine(fsm);
            }

            std::string generateStateDefine(const FiniteStateMachine* fsm){
                // 1. for each vertex of FSM, assign an integer to represent it
                // TODO: #define INIT_STATE 0....
            }   
            //-----Main-----
            std::string generateMain(const FiniteStateMachine* fsm){
                // 1. generate the function body of main
                // TODO
                // 2. generate code for FSM
                this->generateFSMCode(fsm);
            }

            std::string generateFSMCode(const FiniteStateMachine* fsm){
                // 1. generate attributes, guard variables, communication variables...
                // 2. generate main loop of fsm
            }
            //-----File-----
            void generateProcFile(std::string path, const Process* proc){
                // generate a process file for proc at $path
                //1. generate pragmas
                this->generatePragmas(proc->getFiniteStateMachine());
                //2. generate methods
                this->generateProcMethods(proc);
                //3. generate main
                this->generateMain(proc->getFiniteStateMachine());
                //4. write to c file
                //TODO
            }
            //-----Methods-----
            std::string generateProcMethods(const Process* proc){
                // generate method
            }
            //-----FINAL-----
            std::string generateSimCCode(std::string path, std::list<Process*> procs){
                // generate c code for simulation
                // 1. for each process of Model generate a file proc.h
                //loop 
                    this->generateProcFile()
                //endloop
                // 2. 
            }
            
        public: 
            void generateCode() {
                //todo
            }
    };
}

#endif
