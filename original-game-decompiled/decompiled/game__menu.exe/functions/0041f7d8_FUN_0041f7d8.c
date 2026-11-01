
/* ==== FUN_0041f7d8 @ 0041f7d8 ==== 
 * signature: undefined __register FUN_0041f7d8(void)
 * body: 0041f7d8-0041f839
 */

void FUN_0041f7d8(void)

{
  BYTE BVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar2 = MulDiv(8,DAT_004ac658,0x48);
  DAT_004aa37c = -iVar2;
  if (PTR_DAT_004aba14[8] != '\0') {
    BVar1 = FUN_0041f794();
    if (BVar1 == 0x80) {
      puVar3 = &DAT_0041f83c;
      pcVar4 = s_MS_Sans_Serif_004aa383;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
      }
      iVar2 = MulDiv(9,DAT_004ac658,0x48);
      DAT_004aa37c = -iVar2;
      DAT_004aa382 = 0x80;
    }
  }
  return;
}


