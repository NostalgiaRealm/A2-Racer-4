
/* ==== FUN_004281b8 @ 004281b8 ==== 
 * signature: bool __register FUN_004281b8(int * param_1, undefined4 * param_2)
 * body: 004281b8-00428248
 */

bool FUN_004281b8(int *param_1,undefined4 *param_2)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int local_1c;
  int local_18;
  int local_14 [2];
  
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  pHVar2 = GetCapture();
  if (pHVar1 == pHVar2) {
    iVar3 = 0;
    if ((DAT_004466e4 != 0) && (param_1 == *(int **)(DAT_004466e4 + 0x24))) {
      iVar3 = DAT_004466e4;
    }
  }
  else {
    cVar5 = '\0';
    FUN_004069d4(param_2[2],local_14);
    iVar3 = FUN_00428124((int)param_1,local_14,0,cVar5);
  }
  if (iVar3 != 0) {
    local_1c = (int)*(short *)(param_2 + 2) - *(int *)(iVar3 + 0x30);
    local_18 = (int)*(short *)((int)param_2 + 10) - *(int *)(iVar3 + 0x34);
    uVar4 = FUN_004069e8((undefined2 *)&local_1c);
    uVar4 = FUN_00425780(iVar3,*param_2,param_2[1],uVar4);
    param_2[3] = uVar4;
  }
  return iVar3 != 0;
}


