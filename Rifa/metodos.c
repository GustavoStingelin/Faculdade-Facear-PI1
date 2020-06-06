//usuarioStruct
void zeraStrucUsuario(usuarioStruct *usuario){
    (*usuario).idUsr = 0;
    (*usuario).idadeUsr = 0;
    strcpy((*usuario).usuarioUsr, "\0");
    strcpy((*usuario).nomeUsr, "\0");
    strcpy((*usuario).senhaUsr, "\0");
    strcpy((*usuario).telefoneUsr, "\0");
    strcpy((*usuario).cpfUsr, "\0"); 
}
void zeraListaUsuarios(){
	for(int i=0; i <= maxUsuarios - 1; i++){
		zeraStrucUsuario(&usuarios[i]);
	}
}



//rifaStruct e 
void zeraStrucRifa(rifaStruct *rifa){
    (*rifa).id_UsrDono = 0;
    (*rifa).idRifa = 0;
    (*rifa).qtdNrRifa = 0;
    (*rifa).valorNrRifa = 0;
    strcpy((*rifa).nomeRifa, "\0");

    for(int i=0; i <= maxNrRifa - 1; i++){
        (*rifa).vendaRifa[i][0] = 0; //zera numero da rifa
        (*rifa).vendaRifa[i][1] = 0; //zera usuario que comprou
        (*rifa).vendaRifa[i][2] = 0; //zera status
    } 
}
void zeraListaRifa(){
	for(int i=0; i <= maxRifas - 1; i++){
		zeraStrucRifa(&rifas[i]);
	}
}