
/* ==== FUN_00438f00 @ 00438f00 ==== 
 * signature: undefined __cdecl FUN_00438f00(int param_1)
 * body: 00438f00-004390b9
 */

void __cdecl FUN_00438f00(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_00599c84 = param_1;
  FUN_004b1260(DAT_00719b50 + DAT_006c3518 * 0x178);
  FUN_004b1310(DAT_00719b50 + DAT_006c3518 * 0x178);
  iVar2 = *(int *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50);
  iVar1 = DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8;
  FUN_004b1060((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
               *(undefined4 *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8),
               *(float *)(iVar1 + 4) + 15.0,*(undefined4 *)(iVar1 + 8));
  FUN_004b1190((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
               *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41a00000,0xc3160000);
  FUN_004b1290((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
               *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41200000,0);
  DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
  DAT_006c3540 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
  FUN_004390d0(DAT_00599c80);
  return;
}


