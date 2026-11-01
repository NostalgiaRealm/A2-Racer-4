
/* ==== FUN_00425228 @ 00425228 ==== 
 * signature: undefined FUN_00425228(void)
 * body: 00425228-00425315
 */

void FUN_00425228(int *param_1,int param_2)

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
  uVar3 = FUN_00402e8c(piVar6,(int)&PTR_TBaseDragControlObject_vmt_000_004200a4);
  cVar5 = (char)uVar3;
  if ((DAT_00447754 != '\0') && (cVar5 == '\0')) {
    iVar4 = FUN_00402ea4(piVar6,(int)&PTR_TBaseDragControlObject_vmt_000_0042001c);
    piVar6 = *(int **)(iVar4 + 0x38);
  }
  FUN_00424398(param_1,piVar2,aiStack_18);
  if (*(byte *)(param_2 + 4) < 3) {
    if (cVar5 == '\0') {
      bVar1 = *(byte *)(param_2 + 4);
      FUN_00402ef0(param_1,piVar6,aiStack_18[0]);
    }
    else {
      bVar1 = *(byte *)(param_2 + 4);
      FUN_00402ef0((int *)piVar2[3],piVar6,aiStack_18[0]);
    }
    *(uint *)(param_2 + 0xc) = (uint)bVar1;
  }
  else if (*(byte *)(param_2 + 4) == 3) {
    if (cVar5 == '\0') {
      FUN_00402ef0(param_1,piVar6,aiStack_18[0]);
    }
    else {
      FUN_00402ef0((int *)piVar2[3],piVar6,aiStack_18[0]);
    }
  }
  return;
}


