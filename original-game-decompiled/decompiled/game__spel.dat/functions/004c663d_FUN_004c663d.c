
/* ==== FUN_004c663d @ 004c663d ==== 
 * signature: undefined4 __fastcall FUN_004c663d(undefined4 param_1, undefined4 param_2)
 * body: 004c663d-004c663f
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 __fastcall FUN_004c663d(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *in_EAX;
  char unaff_BL;
  int iVar2;
  undefined1 *puVar3;
  int unaff_ESI;
  char *unaff_EDI;
  
  iVar1 = *(int *)(unaff_ESI + 0x4c);
  *unaff_EDI = *unaff_EDI + unaff_BL;
  cRam31004c66 = cRam31004c66 + (char)((uint)in_EAX >> 8);
  *unaff_EDI = *unaff_EDI + (char)((uint)param_2 >> 8);
  iVar2 = CONCAT22((short)((uint)((int)&stack0x00000000 + -iVar1) >> 0x10),
                   (short)((int)&stack0x00000000 + -iVar1) + -3);
  *in_EAX = *in_EAX + (char)in_EAX;
  iVar1 = DAT_0074094c;
  *(int *)(iVar2 + -4) = unaff_ESI;
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar2 + 4);
    *(int *)(iVar2 + -8) = iVar1 * 0xd8;
    *(undefined4 *)(iVar2 + -0xc) = 0x40;
    puVar3 = (undefined1 *)(iVar2 + -0x10);
    *(undefined4 *)(iVar2 + -0x10) = 0x4c66e0;
    DAT_00740930 = LocalAlloc(*(UINT *)(iVar2 + -0xc),*(SIZE_T *)(iVar2 + -8));
    if (DAT_00740930 == (HLOCAL)0x0) {
      *(char **)(puVar3 + -4) = s__s__d____not_enough_memory_to_re_005b4e64;
                    /* WARNING: Subroutine does not return */
      *(undefined4 *)(puVar3 + -8) = 0x4c66f3;
      FUN_004c4150(*(byte **)(puVar3 + -4));
    }
    DAT_00740948 = 0;
    DAT_0074094c = 1;
    DAT_00740944 = iVar1;
  }
  return 0;
}


