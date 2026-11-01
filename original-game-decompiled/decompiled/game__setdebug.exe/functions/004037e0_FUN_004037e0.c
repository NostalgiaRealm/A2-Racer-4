
/* ==== FUN_004037e0 @ 004037e0 ==== 
 * signature: undefined __register FUN_004037e0(void)
 * body: 004037e0-0040382c
 */

void FUN_004037e0(void)

{
  ulonglong uVar1;
  uint uVar2;
  PVOID pvVar3;
  char *pcVar4;
  
  pcVar4 = s_Runtime_error_at_00000000_00446028 + 0x10;
  uVar2 = DAT_00447030;
  do {
    uVar1 = (ulonglong)uVar2;
    uVar2 = uVar2 / 10;
    *pcVar4 = (char)(uVar1 % 10) + '0';
    pcVar4 = pcVar4 + -1;
  } while (uVar2 != 0);
  pvVar3 = FUN_00404d20(DAT_00447038);
  uVar2 = (int)DAT_00447038 - (int)pvVar3;
  pcVar4 = s_Runtime_error_at_00000000_00446028 + 0x1c;
  do {
    *pcVar4 = (&DAT_00446050)[uVar2 & 0xf];
    pcVar4 = pcVar4 + -1;
    uVar2 = uVar2 >> 4;
  } while (uVar2 != 0);
  return;
}


