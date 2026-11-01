
/* ==== FUN_00403a84 @ 00403a84 ==== 
 * signature: undefined __register FUN_00403a84(void)
 * body: 00403a84-00403ad0
 */

void FUN_00403a84(void)

{
  ulonglong uVar1;
  uint uVar2;
  PVOID pvVar3;
  char *pcVar4;
  
  pcVar4 = s_Runtime_error_at_00000000_004aa034 + 0x10;
  uVar2 = DAT_004ac038;
  do {
    uVar1 = (ulonglong)uVar2;
    uVar2 = uVar2 / 10;
    *pcVar4 = (char)(uVar1 % 10) + '0';
    pcVar4 = pcVar4 + -1;
  } while (uVar2 != 0);
  pvVar3 = FUN_00405290(DAT_004ac040);
  uVar2 = (int)DAT_004ac040 - (int)pvVar3;
  pcVar4 = s_Runtime_error_at_00000000_004aa034 + 0x1c;
  do {
    *pcVar4 = s_0123456789ABCDEF_004aa05c[uVar2 & 0xf];
    pcVar4 = pcVar4 + -1;
    uVar2 = uVar2 >> 4;
  } while (uVar2 != 0);
  return;
}


