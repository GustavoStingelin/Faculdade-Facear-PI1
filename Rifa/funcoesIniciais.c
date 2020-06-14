
void executaFuncoesIniciais(){
    execucoesMain = execucoesMain + 1;	
    if(execucoesMain == 1){
        zeraListaUsuarios();
        zeraListaRifa();
        SetConsoleTitle("MRF - Master Rifa");
        system("color 71");
    }
}