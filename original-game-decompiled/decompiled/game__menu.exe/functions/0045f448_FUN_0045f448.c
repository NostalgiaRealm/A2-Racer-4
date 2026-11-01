
/* ==== FUN_0045f448 @ 0045f448 ==== 
 * signature: undefined FUN_0045f448(void)
 * body: 0045f448-0045f46b
 */

int FUN_0045f448(char *param_1,char *param_2,char param_3)

{
  byte bVar1;
  byte bVar3;
  undefined2 uVar4;
  char *pcVar2;
  char *unaff_ESI;
  
  bVar1 = (byte)param_1;
  *param_1 = *param_1 + bVar1;
  *param_1 = *param_1 + bVar1;
  *param_2 = *param_2 + bVar1;
  *param_1 = *param_1 + bVar1;
  bVar3 = (byte)((uint)param_1 >> 8);
  uVar4 = (undefined2)((uint)param_1 >> 0x10);
  pcVar2 = (char *)CONCAT22(uVar4,CONCAT11(bVar3 + (byte)param_2,bVar1));
  *pcVar2 = *pcVar2 + bVar1 + CARRY1(bVar3,(byte)param_2);
  pcVar2 = (char *)CONCAT31((int3)((uint)pcVar2 >> 8),bVar1);
  *pcVar2 = *pcVar2 + bVar1;
  pcVar2 = (char *)(CONCAT31((int3)(CONCAT22(uVar4,CONCAT11(bVar1 / 0x10,bVar1)) >> 8),bVar1 % 0x10)
                   + 1);
  *pcVar2 = *pcVar2 + param_3;
  *pcVar2 = *pcVar2 + (char)pcVar2;
  *unaff_ESI = *unaff_ESI + (char)pcVar2;
  if (DAT_004ac924 == 0) {
    if (DAT_004ac91c == (undefined4 *)0x0) {
      FUN_00403c40("Debugfilename not init.");
    }
    DAT_004ac924 = FUN_0045f4f8((uint)FUN_0045f448,'\x01',DAT_004ac91c);
  }
  return DAT_004ac924;
}


