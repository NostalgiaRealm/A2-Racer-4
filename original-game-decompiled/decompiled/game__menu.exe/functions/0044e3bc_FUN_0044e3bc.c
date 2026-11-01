
/* ==== FUN_0044e3bc @ 0044e3bc ==== 
 * signature: char __register FUN_0044e3bc(int param_1, undefined4 param_2, int * param_3)
 * body: 0044e3bc-0044e44a
 */

char FUN_0044e3bc(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  
  iVar3 = *(int *)(DAT_004ac7d8 + 0x60);
  if (iVar3 == 0) {
LAB_0044e3e7:
    iVar2 = *(int *)(param_1 + 0x38);
    if ((iVar3 != iVar2) && (iVar2 != 0)) {
      iVar3 = FUN_0042f720(iVar2,param_2,0,param_3);
      if (iVar3 == 1) goto LAB_0044e407;
    }
    cVar1 = '\0';
  }
  else {
    iVar2 = FUN_0042f720(iVar3,param_2,0,param_3);
    if (iVar2 != 1) goto LAB_0044e3e7;
LAB_0044e407:
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    uVar4 = FUN_00403114(param_3,(int)&PTR_TCustomAction_vmt_000_0043943c);
    if ((((char)uVar4 != '\0') && (*(char *)((int)param_3 + 0x59) != '\0')) &&
       ((char)param_3[0x14] != '\0')) {
      FUN_00439d30(param_3,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(short *)((int)param_3 + 0x32) != 0));
    }
  }
  return cVar1;
}


