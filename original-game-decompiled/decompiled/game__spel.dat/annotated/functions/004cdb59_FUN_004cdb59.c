
/* ==== FUN_004cdb59 @ 004cdb59 ==== 
 * signature: undefined __fastcall FUN_004cdb59(byte * param_1)
 * body: 004cdb59-004cdb5b
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_004cdb59(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint in_EAX;
  undefined3 uVar4;
  byte *pbVar3;
  byte bVar5;
  char cVar6;
  char *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  byte *unaff_EDI;
  
  out(0xd7,(char)in_EAX);
  bVar5 = (byte)param_1;
  *param_1 = *param_1 + bVar5;
  uVar2 = CONCAT11((char)(in_EAX >> 8) + (char)unaff_EBX,unaff_EBX[in_EAX & 0xff]);
  uVar4 = (undefined3)(CONCAT22((short)(in_EAX >> 0x10),uVar2) >> 8);
  bVar1 = unaff_EBX[uVar2 & 0xff];
  cVar6 = (char)((uint)param_1 >> 8);
  *(char *)(unaff_ESI + 0x55004cd7) = *(char *)(unaff_ESI + 0x55004cd7) + cVar6;
  bVar1 = unaff_EBX[bVar1];
  *param_1 = *param_1 + (char)unaff_EBX;
  bVar1 = unaff_EBX[bVar1];
  *unaff_EDI = *unaff_EDI + cVar6;
  bVar1 = unaff_EBX[bVar1];
  pbVar3 = (byte *)CONCAT31(uVar4,bVar1);
  *(char *)(unaff_EBP + -0x25) = *(char *)(unaff_EBP + -0x25) + bVar1;
  *pbVar3 = *pbVar3 + bVar1;
  *pbVar3 = *pbVar3 | bVar5;
  *param_1 = *param_1 | bVar1;
  cVar6 = *unaff_EBX;
  pbVar3 = (byte *)CONCAT31(uVar4,bVar1 + cVar6);
  *pbVar3 = *pbVar3 | bVar5;
  *pbVar3 = *pbVar3 | bVar5;
  *pbVar3 = *pbVar3 | bVar5;
  bVar1 = bVar1 + cVar6 + 8;
  pbVar3 = (byte *)CONCAT31(uVar4,bVar1);
  bRam08080608 = bRam08080608 | bVar1;
  *pbVar3 = *pbVar3 | bVar5;
  *pbVar3 = *pbVar3 | bVar5;
  *unaff_EDI = *unaff_EDI | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


