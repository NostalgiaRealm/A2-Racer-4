
/* ==== FUN_00454de0 @ 00454de0 ==== 
 * signature: int __stdcall FUN_00454de0(int param_1, int param_2)
 * body: 00454de0-00454e4d
 */

int FUN_00454de0(int param_1,int param_2)

{
  void *this;
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1 * 0xf0;
  iVar5 = *(int *)(iVar4 + 0x24 + DAT_00715e50);
  iVar1 = DAT_0073b0d0 + iVar5 + iVar5 * 0xa8;
  puVar3 = (undefined4 *)
           (*(int *)(*(int *)(*(int *)(DAT_0073b0d0 + iVar5 + 4 + iVar5 * 0xa8) * 9 + 4 +
                             DAT_0073b168) + param_2 * 4) * 0x10 + DAT_0073b120);
  iVar1 = FUN_004a78a0(*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54),
                       *(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x74),
                       *(undefined4 *)(iVar1 + 0x78),*(undefined4 *)(iVar1 + 0x7c),*puVar3,puVar3[1]
                       ,FUN_00454ce0,0,0);
  iVar5 = iVar1 * 0xf0;
  this = (void *)(iVar5 + DAT_00715e50);
  pvVar2 = (void *)FUN_004a7bd0(iVar4 + DAT_00715e50);
  FUN_004a7be0(this,pvVar2);
  *(undefined4 *)(iVar5 + 0x34 + DAT_00715e50) = *(undefined4 *)(iVar4 + 0x34 + DAT_00715e50);
  *(undefined4 *)(iVar5 + 0x5c + DAT_00715e50) = 1;
  return iVar1;
}


