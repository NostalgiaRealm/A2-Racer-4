
/* ==== FUN_0049198c @ 0049198c ==== 
 * signature: undefined FUN_0049198c(void)
 * body: 0049198c-004919a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049198c(char *param_1,undefined2 param_2,char *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar5;
  int unaff_EBX;
  undefined4 *unaff_EDI;
  byte bVar4;
  
  bVar2 = (byte)param_1;
  *param_1 = *param_1 + bVar2;
  *param_1 = *param_1 + bVar2;
  *param_3 = *param_3 + bVar2;
  *param_1 = *param_1 + bVar2;
  bVar4 = (byte)((uint)param_1 >> 8);
  bVar5 = (byte)param_2;
  pbVar3 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar4 + bVar5,bVar2));
  *pbVar3 = *pbVar3 + bVar2 + CARRY1(bVar4,bVar5);
  *pbVar3 = *pbVar3 | bVar2;
  *pbVar3 = *pbVar3 + bVar2;
  pbVar3 = (byte *)((int)unaff_EDI + (int)pbVar3 * 2 + 0x61);
  *pbVar3 = *pbVar3 | bVar5;
  uVar1 = in(param_2);
  *unaff_EDI = uVar1;
  if (unaff_EBX + -1 < 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  _DAT_004ad4b4 = _DAT_004ad4b4 + -1;
  return;
}


