
/* ==== FUN_00403710 @ 00403710 ==== 
 * signature: undefined FUN_00403710(void)
 * body: 00403710-00403760
 */

undefined4 FUN_00403710(void)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000014;
  int in_stack_00000030;
  
  *(undefined4 *)(in_stack_00000030 + 4) = 0x40375b;
  piVar3 = FUN_0040655c();
  piVar2 = (int *)*piVar3;
  *piVar3 = *piVar2;
  piVar3 = (int *)piVar2[3];
  puVar1 = (uint *)(piVar3 + 1);
  *puVar1 = *puVar1 & 0xfffffffd;
  if (*piVar3 != 0xeedfade) {
    FUN_00402f9c((int *)piVar2[2]);
    FUN_0040330c();
  }
  *in_stack_00000014 = *(undefined4 *)*in_FS_OFFSET;
  return 1;
}


