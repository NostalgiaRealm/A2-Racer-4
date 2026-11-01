
/* ==== FUN_0048813c @ 0048813c ==== 
 * signature: undefined FUN_0048813c(void)
 * body: 0048813c-004881cb
 */

void FUN_0048813c(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  int *piStack_8;
  
  puStack_10 = &stack0xfffffffc;
  piStack_8 = (int *)0x0;
  puStack_14 = &UNK_004881cc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x2d4);
  uVar2 = FUN_00427908(piVar1);
  piVar1 = (int *)piVar1[0x7c];
  (**(code **)(*piVar1 + 0x18))(piVar1,uVar2);
  FUN_00405860((int *)&piStack_8);
  uVar3 = DirectDrawCreate();
  FUN_0046c2c0(uVar3);
  piVar1 = piStack_8;
  uVar3 = (**(code **)(*piStack_8 + 0x20))();
  FUN_0046c2c0(uVar3);
  *in_FS_OFFSET = piVar1;
  FUN_00405860((int *)&piStack_8);
  return;
}


