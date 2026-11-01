
/* ==== FUN_00402744 @ 00402744 ==== 
 * signature: undefined __register FUN_00402744(uint param_1)
 * body: 00402744-0040276c
 */

void FUN_00402744(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined4 in_stack_00000000;
  
  uVar1 = param_1 & 0x7f;
  if (DAT_00447004 != (code *)0x0) {
    uVar1 = (*DAT_00447004)(uVar1,in_stack_00000000);
  }
  uVar2 = CONCAT31((int3)(uVar1 - 1 >> 8),*(undefined1 *)(uVar1 + 0x40276c));
  if ((int)(uVar1 - 1) < 0) {
    pvVar3 = FUN_00405fa4();
    uVar2 = *(undefined4 *)((int)pvVar3 + 4);
  }
  FUN_00403990(uVar2);
  return;
}


