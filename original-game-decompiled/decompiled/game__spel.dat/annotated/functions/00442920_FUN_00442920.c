
/* ==== FUN_00442920 @ 00442920 ==== 
 * signature: undefined __thiscall FUN_00442920(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5, char param_6)
 * body: 00442920-004429b4;004429b8-00442a1c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004429b5-004429b7
 */

void __thiscall
FUN_00442920(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            char param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_00442800(this,param_1,param_2,param_3,param_4,0x80ffffff);
  iVar1 = FUN_004b75a0(&DAT_00712130,s_RadarItems_0059d2b8);
  piVar2 = (int *)(DAT_0073b120 +
                  *(int *)(*(int *)(iVar1 * 9 + 4 + DAT_0073b168) + param_5 * 4) * 0x10);
  iVar1 = *piVar2;
  *(int *)((int)this + 0x88) = piVar2[1];
  iVar1 = iVar1 * 0xac;
  if (*(int *)(iVar1 + 0x84 + DAT_0073b5c8) == 4) {
    if ((DAT_006fb8d0 == 0) && (param_6 != '\0')) {
      FUN_004bdcd0((void *)(iVar1 + DAT_0073b5c8),*(int *)((int)this + 0x88));
    }
    iVar3 = 0;
    iVar5 = 4;
    puVar4 = (undefined4 *)((int)this + 0x1c);
    do {
      iVar3 = iVar3 + 0x20;
      iVar5 = iVar5 + -1;
      puVar4[-1] = *(undefined4 *)(*(int *)(iVar1 + 0x80 + DAT_0073b5c8) + -8 + iVar3);
      *puVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x80 + DAT_0073b5c8) + -4 + iVar3);
      puVar4 = puVar4 + 8;
    } while (iVar5 != 0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Number_of_vertices_of_ra_0059d2e8);
}


