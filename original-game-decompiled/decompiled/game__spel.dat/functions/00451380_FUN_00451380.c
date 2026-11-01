
/* ==== FUN_00451380 @ 00451380 ==== 
 * signature: undefined __cdecl FUN_00451380(int param_1)
 * body: 00451380-0045141a
 */

void __cdecl FUN_00451380(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  this = (void *)(DAT_00715e50 + param_1 * 0xf0);
  iVar2 = *(int *)((int)this + 0x24);
  iVar1 = DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8;
  local_18 = *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8) + *(float *)((int)this + 200);
  local_14 = *(float *)(iVar1 + 4) + *(float *)((int)this + 0xcc);
  local_10 = *(float *)(iVar1 + 8) + *(float *)((int)this + 0xd0);
  local_c = local_18;
  local_8 = local_14;
  local_4 = local_10;
  FUN_004a7d10(this,&local_18);
  return;
}


