
/* ==== FUN_00438290 @ 00438290 ==== 
 * signature: undefined __cdecl FUN_00438290(int param_1)
 * body: 00438290-004382ae;004382b2-00438402
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004382af-004382b1
 */

void __cdecl FUN_00438290(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < 0xb)) {
    iVar4 = FUN_004b0a60();
    iVar3 = DAT_0073b0d0;
    iVar2 = DAT_00715e50;
    iVar1 = DAT_006fba58;
    (&DAT_006c3518)[param_1] = iVar4;
    iVar2 = *(int *)(iVar1 * 0xf0 + 0x24 + iVar2);
    iVar1 = iVar3 + iVar2 + 0x50 + iVar2 * 0xa8;
    FUN_004b1060((void *)(DAT_00719b50 + iVar4 * 0x178),
                 *(undefined4 *)(iVar3 + iVar2 + 0x50 + iVar2 * 0xa8),*(float *)(iVar1 + 4) + 15.0,
                 *(undefined4 *)(iVar1 + 8));
    FUN_004b1190((void *)(DAT_00719b50 + (&DAT_006c3518)[param_1] * 0x178),
                 *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50),0x42c80000,0x41700000,0)
    ;
    FUN_004b1290((void *)(DAT_00719b50 + (&DAT_006c3518)[param_1] * 0x178),
                 *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50),0,0x41700000,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__init_topview_camera__illegal_ca_00599c08);
}


