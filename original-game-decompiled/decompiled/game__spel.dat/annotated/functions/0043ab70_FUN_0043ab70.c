
/* ==== FUN_0043ab70 @ 0043ab70 ==== 
 * signature: undefined __stdcall FUN_0043ab70(void)
 * body: 0043ab70-0043ac75
 */

void FUN_0043ab70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_006c352c * 0x178;
  FUN_004b1290((void *)(iVar3 + DAT_00719b50),
               *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50),0,0x41a00000,0);
  iVar2 = *(int *)(DAT_00715254 + 0xc + *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50) * 4);
  iVar1 = DAT_00715f00 + 0x34 + iVar2 * 0x994;
  FUN_004b1060((void *)(DAT_00719b50 + iVar3),*(undefined4 *)(DAT_00715f00 + 0x34 + iVar2 * 0x994),
               *(float *)(iVar1 + 4) + 40.0,*(undefined4 *)(iVar1 + 8));
  FUN_004b1380((int *)(iVar3 + DAT_00719b50));
  change_active_camera(5);
  FUN_00450950(s_FINISH_JUICHEN_0059a0fc,0);
  return;
}


