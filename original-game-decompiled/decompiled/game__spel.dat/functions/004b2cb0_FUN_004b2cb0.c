
/* ==== FUN_004b2cb0 @ 004b2cb0 ==== 
 * signature: undefined4 __thiscall FUN_004b2cb0(void * this, int param_1)
 * body: 004b2cb0-004b2d78
 */

uint __thiscall FUN_004b2cb0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  FUN_004c3fa0((byte *)s_TXTCACHE_Adding_texture__d_005b0db4);
  if (*(char *)((int)this + 8) == '\0') {
    uVar3 = FUN_004c3fa0((byte *)s_Texture_cache_not_yet_filled_whi_005b0d88);
    return uVar3 & 0xffffff00;
  }
  iVar4 = param_1 * 0x48;
  iVar1 = DAT_0073b1b0 + *(int *)this * 0x48;
  if ((*(int *)(iVar4 + 0x24 + DAT_0073b1b0) == *(int *)(DAT_0073b1b0 + 0x24 + *(int *)this * 0x48))
     && (*(int *)(iVar4 + 0x28 + DAT_0073b1b0) == *(int *)(iVar1 + 0x28))) {
    *(undefined4 *)(iVar4 + 8 + DAT_0073b1b0) = *(undefined4 *)(iVar1 + 8);
    piVar2 = *(int **)(DAT_0073b1b0 + 8 + *(int *)this * 0x48);
    (**(code **)(*piVar2 + 4))(piVar2);
    *(undefined4 *)(iVar4 + 0x10 + DAT_0073b1b0) =
         *(undefined4 *)(DAT_0073b1b0 + 0x10 + *(int *)this * 0x48);
    piVar2 = *(int **)(iVar4 + 0x10 + DAT_0073b1b0);
    (**(code **)(*piVar2 + 4))(piVar2);
    iVar1 = DAT_0073b1b0;
    *(undefined4 *)(iVar4 + DAT_0073b1b0) = *(undefined4 *)(DAT_0073b1b0 + *(int *)this * 0x48);
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  uVar3 = FUN_004c3fa0((byte *)s_Texture_cache_width___d__not_equ_005b0d4c);
  return uVar3 & 0xffffff00;
}


