
/* ==== FUN_0042d128 @ 0042d128 ==== 
 * signature: int * __register FUN_0042d128(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0042d128-0042d1bb
 */

int * FUN_0042d128(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  
  iVar1 = FUN_0042781c(*(int *)(*(int *)(param_4 + -8) + 0x14));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      piVar2 = (int *)FUN_004277e0(*(int *)(*(int *)(param_4 + -8) + 0x14),iVar1);
      if ((*(char *)((int)piVar2 + 0x47) != '\0') &&
         ((uVar3 = FUN_00402e8c(piVar2,(int)&PTR_TWinControl_vmt_000_00420fa8), (char)uVar3 == '\0'
          || ((char)piVar2[0x5a] != '\0')))) {
        FUN_0040e594(*param_1 - piVar2[0xc],param_1[1] - piVar2[0xd],&local_c);
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


