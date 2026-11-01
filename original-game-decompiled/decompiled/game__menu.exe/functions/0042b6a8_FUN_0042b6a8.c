
/* ==== FUN_0042b6a8 @ 0042b6a8 ==== 
 * signature: undefined FUN_0042b6a8(void)
 * body: 0042b6a8-0042b6b4
 */

void FUN_0042b6a8(int param_1,uint param_2)

{
  ushort *puVar1;
  short sVar2;
  code *pcVar3;
  int unaff_EBX;
  ushort unaff_BP;
  undefined4 *unaff_ESI;
  
  *(uint *)(&stack0x0000006f + param_1 * 2) = *(uint *)(&stack0x0000006f + param_1 * 2) | param_2;
  puVar1 = (ushort *)(unaff_EBX + 0x5a);
  sVar2 = (unaff_BP & 3) - (*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar2) * sVar2;
  out(*unaff_ESI,(short)param_2);
  out(*(undefined1 *)(unaff_ESI + 1),(short)param_2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)(param_1);
  return;
}


