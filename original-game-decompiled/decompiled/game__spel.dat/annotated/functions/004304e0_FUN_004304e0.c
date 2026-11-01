
/* ==== FUN_004304e0 @ 004304e0 ==== 
 * signature: undefined __thiscall FUN_004304e0(void * this, int param_1)
 * body: 004304e0-004307e0
 */

void __thiscall FUN_004304e0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  longlong lVar6;
  
  *(int *)(*(int *)this * 0xf0 + 0x48 + DAT_00715e50) = param_1;
  iVar3 = param_1 * 0xf0;
  *(undefined4 *)(iVar3 + 0x44 + DAT_00715e50) = *(undefined4 *)this;
  *(undefined4 *)(*(int *)this * 0xf0 + 0x34 + DAT_00715e50) =
       *(undefined4 *)(iVar3 + 0x34 + DAT_00715e50);
  iVar4 = *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
  iVar5 = DAT_0073b0d0 + *(int *)(*(int *)this * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  puVar1 = (undefined4 *)(iVar3 + 0xbc + DAT_00715e50);
  puVar2 = (undefined4 *)(*(int *)this * 0xf0 + 0xbc + DAT_00715e50);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  *(undefined4 *)(*(int *)this * 0xf0 + 0xcc + DAT_00715e50) =
       *(undefined4 *)(iVar3 + 0xcc + DAT_00715e50);
  iVar3 = DAT_0073b0d0 + *(int *)(*(int *)this * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  lVar6 = __ftol();
  *(float *)(iVar3 + 0x50) =
       (float)((float10)*(float *)(DAT_0073b530 + ((uint)lVar6 & DAT_005b23bc) * 4) * extraout_ST0 +
              (float10)*(float *)(iVar3 + 0x50));
  iVar3 = DAT_0073b0d0 + *(int *)(*(int *)this * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  lVar6 = __ftol();
  *(float *)(iVar3 + 0x58) =
       (float)((float10)*(float *)(iVar3 + 0x58) -
              (float10)*(float *)(DAT_0073b578 + ((uint)lVar6 & DAT_005b23bc) * 4) * extraout_ST0_00
              );
  FUN_004b5770(DAT_0073b0d0 + *(int *)(*(int *)this * 0xf0 + 0x24 + DAT_00715e50) * 0xa9);
  *(undefined1 *)((int)this + 0x28) = 1;
  iVar3 = FUN_004a8600((void *)(*(int *)this * 0xf0 + DAT_00715e50),4);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 1;
  iVar3 = FUN_004a8600((void *)(*(int *)this * 0xf0 + DAT_00715e50),5);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 1;
  iVar3 = FUN_004a8600((void *)(*(int *)this * 0xf0 + DAT_00715e50),6);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 1;
  iVar3 = FUN_004a8600((void *)(*(int *)this * 0xf0 + DAT_00715e50),7);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 1;
  return;
}


