
/* ==== FUN_0042f1c8 @ 0042f1c8 ==== 
 * signature: undefined FUN_0042f1c8(void)
 * body: 0042f1c8-0042f2b5
 */

void FUN_0042f1c8(int *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int aiStack_18 [2];
  
  piVar2 = *(int **)(param_2 + 8);
  piVar6 = (int *)piVar2[2];
  uVar3 = FUN_00403114(piVar6,(int)FUN_00429c24);
  cVar5 = (char)uVar3;
  if ((DAT_004ac764 != '\0') && (cVar5 == '\0')) {
    iVar4 = FUN_0040312c(piVar6,(int)&PTR_TBaseDragControlObject_vmt_000_00429b9c);
    piVar6 = *(int **)(iVar4 + 0x38);
  }
  FUN_0042e2d8(param_1,piVar2,aiStack_18);
  if (*(byte *)(param_2 + 4) < 3) {
    if (cVar5 == '\0') {
      bVar1 = *(byte *)(param_2 + 4);
      FUN_00403178(param_1,piVar6,aiStack_18[0]);
    }
    else {
      bVar1 = *(byte *)(param_2 + 4);
      FUN_00403178((int *)piVar2[3],piVar6,aiStack_18[0]);
    }
    *(uint *)(param_2 + 0xc) = (uint)bVar1;
  }
  else if (*(byte *)(param_2 + 4) == 3) {
    if (cVar5 == '\0') {
      FUN_00403178(param_1,piVar6,aiStack_18[0]);
    }
    else {
      FUN_00403178((int *)piVar2[3],piVar6,aiStack_18[0]);
    }
  }
  return;
}


