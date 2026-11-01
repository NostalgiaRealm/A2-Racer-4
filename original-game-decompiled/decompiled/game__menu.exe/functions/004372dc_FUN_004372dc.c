
/* ==== FUN_004372dc @ 004372dc ==== 
 * signature: int * __register FUN_004372dc(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 004372dc-0043736f
 */

int * FUN_004372dc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  POINT pt;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  BOOL BVar4;
  LONG LVar5;
  LONG LVar6;
  RECT local_1c;
  LONG local_c;
  LONG local_8;
  
  iVar1 = FUN_004317bc(*(int *)(*(int *)(param_4 + -8) + 0x14));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      piVar2 = (int *)FUN_00431780(*(int *)(*(int *)(param_4 + -8) + 0x14),iVar1);
      if ((*(char *)((int)piVar2 + 0x47) != '\0') &&
         ((uVar3 = FUN_00403114(piVar2,(int)&PTR_TWinControl_vmt_000_0042ac0c), (char)uVar3 == '\0'
          || ((char)piVar2[0x5a] != '\0')))) {
        FUN_0040f7d0(*param_1 - piVar2[0xc],param_1[1] - piVar2[0xd],&local_c);
        LVar5 = local_c;
        LVar6 = local_8;
        (**(code **)(*piVar2 + 0x40))(piVar2,&local_1c);
        pt.y = LVar6;
        pt.x = LVar5;
        BVar4 = PtInRect(&local_1c,pt);
        if (BVar4 != 0) {
          return piVar2;
        }
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return (int *)0x0;
}


