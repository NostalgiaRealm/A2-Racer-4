
/* ==== FUN_004299d8 @ 004299d8 ==== 
 * signature: undefined FUN_004299d8(void)
 * body: 004299d8-00429a84
 */

undefined1 FUN_004299d8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((*(char *)(param_1 + 0x168) != '\0') && (iVar2 = FUN_0042781c(param_1), -1 < iVar2 + -1)) {
    iVar6 = 0;
    do {
      piVar3 = (int *)FUN_004277e0(param_1,iVar6);
      if (((*(char *)((int)piVar3 + 0x47) != '\0') &&
          (cVar1 = (**(code **)(*piVar3 + 0x4c))(), cVar1 != '\0')) &&
         ((((*(byte *)((int)piVar3 + 0x42) & 1) != 0 &&
           (iVar4 = FUN_00425780((int)piVar3,0x112,*(undefined4 *)(*(int *)(param_4 + -4) + 4),
                                 *(undefined4 *)(*(int *)(param_4 + -4) + 8)), iVar4 != 0)) ||
          ((uVar5 = FUN_00402e8c(piVar3,(int)&PTR_TWinControl_vmt_000_00420fa8), (char)uVar5 != '\0'
           && (cVar1 = FUN_004299d8(piVar3), cVar1 != '\0')))))) {
        return 1;
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}


