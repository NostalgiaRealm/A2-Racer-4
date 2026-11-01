
/* ==== FUN_00438d20 @ 00438d20 ==== 
 * signature: undefined __stdcall FUN_00438d20(void)
 * body: 00438d20-00438ef9
 */

void FUN_00438d20(void)

{
  int iVar1;
  int iVar2;
  
  DAT_006c3518 = FUN_004b0a60();
  DAT_00599c84 = DAT_006fba58;
  iVar2 = *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  iVar1 = DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8;
  FUN_004b1060((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
               *(undefined4 *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8),
               *(float *)(iVar1 + 4) + 15.0,*(undefined4 *)(iVar1 + 8));
  FUN_004b1190((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
               *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41a00000,0xc3160000);
  FUN_004b1290((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
               *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41200000,0);
  FUN_004b1380((int *)(DAT_00719b50 + DAT_006c3518 * 0x178));
  FUN_004b1110((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),DAT_006c3578,DAT_006c357c,DAT_006c3580)
  ;
  *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 0;
  DAT_00599c80 = 1;
  FUN_004390d0(1);
  return;
}


