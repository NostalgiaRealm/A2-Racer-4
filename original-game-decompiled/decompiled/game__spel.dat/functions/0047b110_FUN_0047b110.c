
/* ==== FUN_0047b110 @ 0047b110 ==== 
 * signature: undefined __thiscall FUN_0047b110(void * this, undefined4 param_1)
 * body: 0047b110-0047b249;0047b24d-0047b273
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0047b24a-0047b24c
 */

void __thiscall FUN_0047b110(void *this,undefined4 param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (2 < *(int *)((int)this + 4)) {
    pvVar1 = operator_new(*(int *)((int)this + 4) << 5);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (LPVOID)0x0;
    }
    iVar4 = 0;
    if (0 < *(int *)((int)this + 4)) {
      puVar2 = (undefined4 *)((int)pvVar1 + 8);
      iVar3 = 0;
      do {
        iVar4 = iVar4 + 1;
        puVar2[-2] = *(undefined4 *)(iVar3 + *(int *)((int)this + 0xc));
        puVar2[-1] = *(undefined4 *)(iVar3 + 4 + *(int *)((int)this + 0xc));
        *puVar2 = *(undefined4 *)(iVar3 + 8 + *(int *)((int)this + 0xc));
        puVar2[3] = 0xff000000;
        puVar2[2] = param_1;
        puVar2[4] = *(undefined4 *)(iVar3 + *(int *)((int)this + 0x10));
        puVar2[5] = *(undefined4 *)(iVar3 + 4 + *(int *)((int)this + 0x10));
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 + 0xc;
      } while (iVar4 < *(int *)((int)this + 4));
    }
    iVar4 = FUN_004b7400(&DAT_00712130,s_S_SHADOW_PCX_005a9a54);
    if (DAT_006fb8d0 != 0) {
      iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar3 + 0x60) = iVar4;
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar4 * 0x48 + DAT_0073b1b0);
      *(undefined4 *)(iVar3 + 0x58) = 1;
      if (*(int *)(iVar3 + 0x5c) == 1) {
        *(undefined4 *)(iVar3 + 0x58) = 0;
        (**(code **)(**(int **)(iVar3 + 0x54) + 0xc))(*(int **)(iVar3 + 0x54),iVar3);
      }
      if ((DAT_0073b4ec != iVar4) &&
         (DAT_0073b4ec = iVar4,
         iVar4 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                           (DAT_0073b4b4,1,*(undefined4 *)(iVar4 * 0x48 + DAT_0073b1b0)), iVar4 != 0
         )) {
        FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
    (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,6,2,pvVar1,*(undefined4 *)((int)this + 4),1);
    FUN_0054b339(pvVar1);
  }
  return;
}


