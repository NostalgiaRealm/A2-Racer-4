
/* ==== FUN_00443230 @ 00443230 ==== 
 * signature: char __register FUN_00443230(int param_1, undefined4 param_2, int * param_3)
 * body: 00443230-004432be
 */

char FUN_00443230(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  
  iVar3 = *(int *)(DAT_004477c8 + 0x60);
  if (iVar3 == 0) {
LAB_0044325b:
    iVar2 = *(int *)(param_1 + 0x38);
    if ((iVar3 != iVar2) && (iVar2 != 0)) {
      iVar3 = FUN_00425780(iVar2,param_2,0,param_3);
      if (iVar3 == 1) goto LAB_0044327b;
    }
    cVar1 = '\0';
  }
  else {
    iVar2 = FUN_00425780(iVar3,param_2,0,param_3);
    if (iVar2 != 1) goto LAB_0044325b;
LAB_0044327b:
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    uVar4 = FUN_00402e8c(param_3,(int)&PTR_TCustomAction_vmt_000_0042f24c);
    if ((((char)uVar4 != '\0') && (*(char *)((int)param_3 + 0x59) != '\0')) &&
       ((char)param_3[0x14] != '\0')) {
      FUN_0042fb40(param_3,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(short *)((int)param_3 + 0x32) != 0));
    }
  }
  return cVar1;
}


