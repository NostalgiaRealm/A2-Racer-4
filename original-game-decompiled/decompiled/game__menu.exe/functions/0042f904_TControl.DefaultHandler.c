
/* ==== TControl.DefaultHandler @ 0042f904 ==== 
 * signature: undefined __register TControl.DefaultHandler(int param_1, int * param_2)
 * body: 0042f904-0042f984
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TControl_DefaultHandler(int param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_2;
  if (iVar2 == 0xc) {
    uVar3 = FUN_00408d40((char *)param_2[2]);
    FUN_00408d6c(*(int *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    FUN_0042e334(param_1,*param_2,param_2[1],param_2[2]);
  }
  else if (iVar2 == 0xd) {
    pcVar1 = *(char **)(param_1 + 0x54);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    pcVar1 = FUN_00408bb4((char *)param_2[2],pcVar1,param_2[1] + -1);
    iVar2 = FUN_00408b24(pcVar1);
    param_2[3] = iVar2;
  }
  else if (iVar2 == 0xe) {
    if (*(char **)(param_1 + 0x54) == (char *)0x0) {
      param_2[3] = 0;
    }
    else {
      iVar2 = FUN_00408b24(*(char **)(param_1 + 0x54));
      param_2[3] = iVar2;
    }
  }
  return;
}


