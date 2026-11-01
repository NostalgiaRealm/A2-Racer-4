
/* ==== FUN_00403488 @ 00403488 ==== 
 * signature: undefined FUN_00403488(void)
 * body: 00403488-004034d8
 */

undefined4 FUN_00403488(void)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000014;
  int in_stack_00000030;
  
  *(undefined4 *)(in_stack_00000030 + 4) = 0x4034d3;
  piVar3 = FUN_00405fa4();
  piVar2 = (int *)*piVar3;
  *piVar3 = *piVar2;
  piVar3 = (int *)piVar2[3];
  puVar1 = (uint *)(piVar3 + 1);
  *puVar1 = *puVar1 & 0xfffffffd;
  if (*piVar3 != 0xeedfade) {
    FUN_00402d14((int *)piVar2[2]);
    FUN_00403084();
  }
  *in_stack_00000014 = *(undefined4 *)*in_FS_OFFSET;
  return 1;
}


