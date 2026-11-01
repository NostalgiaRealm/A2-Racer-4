
/* ==== FUN_0042faa0 @ 0042faa0 ==== 
 * signature: undefined4 __thiscall FUN_0042faa0(void * this, int param_1, int param_2)
 * body: 0042faa0-0042fc45;0042fc49-0042fc62;0042fc66-0042fc89;0042fc8d-0042fcb2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042fc46-0042fc48 0042fc63-0042fc65 0042fc8a-0042fc8c
 */

undefined4 __thiscall FUN_0042faa0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_20 [4];
  uint uStack_10;
  
  FUN_0042fa60(this,param_1);
  FUN_0042fa80(this,param_2);
  iVar1 = FUN_004a8c50(*(int *)this * 0xf0 + DAT_00715e50);
  iVar1 = iVar1 * 0xac;
  *(float *)((int)this + 0x1c) =
       (*(float *)(iVar1 + 0x58 + DAT_0073b5c8) + *(float *)(iVar1 + 0x10 + DAT_0073b5c8)) * 0.5;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(iVar1 + 0x5c + DAT_0073b5c8);
  *(float *)((int)this + 0x24) = *(float *)(iVar1 + 0x60 + DAT_0073b5c8) + 0.1;
  iVar1 = FUN_004a8c50(*(int *)((int)this + 4) * 0xf0 + DAT_00715e50);
  iVar1 = iVar1 * 0xac;
  *(float *)((int)this + 0x10) =
       (*(float *)(iVar1 + 0x58 + DAT_0073b5c8) + *(float *)(iVar1 + 0x10 + DAT_0073b5c8)) * 0.5;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar1 + 0x14 + DAT_0073b5c8);
  *(float *)((int)this + 0x18) = *(float *)(iVar1 + 0x18 + DAT_0073b5c8) - 0.1;
  FUN_004304e0(this,*(int *)((int)this + 4));
  *(undefined4 *)((int)this + 8) = 0x45fa0000;
  *(undefined4 *)((int)this + 0xc) = 0x467a0000;
  *(int *)(*(int *)((int)this + 4) * 0xf0 + 0x44 + DAT_00715e50) = param_1;
  iVar1 = param_1 * 0xf0;
  *(undefined4 *)(iVar1 + 0x48 + DAT_00715e50) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)(iVar1 + 0x44 + DAT_00715e50) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x68 + DAT_00715e50) = 1;
  FUN_00430e10(this);
  iVar1 = FUN_004a8600((void *)(DAT_00715e50 + iVar1),8);
  iVar2 = *(int *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x99);
  iVar1 = DAT_0073b5c8 + iVar2 * 0xac;
  if (*(int *)(DAT_0073b5c8 + iVar2 * 0xac) != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
  }
  if (*(int *)(iVar1 + 4) != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
  }
  if (*(int *)(iVar1 + 0x84) < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x80);
  puVar4 = auStack_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(uint *)((int)this + 0x30) = uStack_10 >> 0x18;
  return 0;
}


