
/* ==== TControl.DefaultHandler @ 00425964 ==== 
 * signature: undefined __register TControl.DefaultHandler(int param_1, int * param_2)
 * body: 00425964-004259e4
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
    uVar3 = FUN_00408228((char *)param_2[2]);
    FUN_00408254(*(int *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    FUN_004243f4(param_1,*param_2,param_2[1],param_2[2]);
  }
  else if (iVar2 == 0xd) {
    pcVar1 = *(char **)(param_1 + 0x54);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    pcVar1 = FUN_004080b0((char *)param_2[2],pcVar1,param_2[1] + -1);
    iVar2 = FUN_00408020(pcVar1);
    param_2[3] = iVar2;
  }
  else if (iVar2 == 0xe) {
    if (*(char **)(param_1 + 0x54) == (char *)0x0) {
      param_2[3] = 0;
    }
    else {
      iVar2 = FUN_00408020(*(char **)(param_1 + 0x54));
      param_2[3] = iVar2;
    }
  }
  return;
}


