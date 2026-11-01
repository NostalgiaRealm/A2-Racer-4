
/* ==== FUN_00485f48 @ 00485f48 ==== 
 * signature: undefined __register FUN_00485f48(int * param_1, char param_2)
 * body: 00485f48-00485f99
 */

void FUN_00485f48(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  WPARAM WVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  iVar2 = FUN_00485c54((int)param_1,param_1[0x91],param_2,'\x01');
  if ((iVar2 != 0) && (iVar2 != param_1[0x91])) {
    cVar1 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      WVar3 = FUN_004855fc(iVar2);
      FUN_00484e98(param_1,WVar3);
      FUN_00403178(param_1,extraout_EDX_00,extraout_ECX_00);
    }
  }
  return;
}


