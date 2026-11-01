
/* ==== FUN_00431140 @ 00431140 ==== 
 * signature: undefined __thiscall FUN_00431140(void * this, uint param_1)
 * body: 00431140-004311bf;004311c3-004311dc;004311e0-00431203;00431207-00431279
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004311c0-004311c2 004311dd-004311df 00431204-00431206
 */

void __thiscall FUN_00431140(void *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 auStack_20 [4];
  uint uStack_10;
  
  if ((int)*(uint *)((int)this + 0x30) < (int)param_1) {
    param_1 = *(uint *)((int)this + 0x30);
  }
  iVar3 = FUN_004a8600((void *)(*(int *)this * 0xf0 + DAT_00715e50),8);
  iVar5 = *(int *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x99) * 0xac;
  iVar3 = iVar5 + DAT_0073b5c8;
  if (*(int *)(iVar5 + DAT_0073b5c8) != 2) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
  }
  if (*(int *)(iVar3 + 4) != 2) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____vertices_were_not__yet__00597c44);
  }
  if (*(int *)(iVar3 + 0x84) < 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
  }
  puVar6 = *(undefined4 **)(iVar3 + 0x80);
  puVar7 = auStack_20;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((param_1 != uStack_10 >> 0x18) && (*(int *)(iVar5 + DAT_0073b5c8) == 2)) {
    iVar3 = 0;
    piVar1 = (int *)(iVar5 + 0x84 + DAT_0073b5c8);
    if (0 < *(int *)(iVar5 + 0x84 + DAT_0073b5c8)) {
      piVar2 = (int *)(iVar5 + 0x80 + DAT_0073b5c8);
      iVar5 = 0;
      do {
        iVar3 = iVar3 + 1;
        *(uint *)(*piVar2 + 0x10 + iVar5) = uStack_10 & 0xffffff | param_1 << 0x18;
        iVar5 = iVar5 + 0x20;
      } while (iVar3 < *piVar1);
    }
  }
  return;
}


