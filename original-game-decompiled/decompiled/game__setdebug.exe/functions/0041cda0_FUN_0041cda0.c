
/* ==== FUN_0041cda0 @ 0041cda0 ==== 
 * signature: undefined __register FUN_0041cda0(void)
 * body: 0041cda0-0041ce01
 */

void FUN_0041cda0(void)

{
  BYTE BVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar2 = MulDiv(8,DAT_00447650,0x48);
  DAT_00446358 = -iVar2;
  if (PTR_DAT_00446da0[8] != '\0') {
    BVar1 = FUN_0041cd5c();
    if (BVar1 == 0x80) {
      puVar3 = &DAT_0041ce04;
      pcVar4 = s_MS_Sans_Serif_0044635f;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
      }
      iVar2 = MulDiv(9,DAT_00447650,0x48);
      DAT_00446358 = -iVar2;
      DAT_0044635e = 0x80;
    }
  }
  return;
}


