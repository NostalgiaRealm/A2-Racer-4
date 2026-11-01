
/* ==== FUN_100062a9 @ 100062a9 ==== 
 * signature: undefined __fastcall FUN_100062a9(undefined4 param_1, undefined4 param_2)
 * body: 100062a9-100062ab
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_100062a9(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *in_EAX;
  byte bVar4;
  int unaff_EBX;
  byte in_CF;
  bool bVar5;
  bool bVar6;
  undefined8 in_MM0;
  
  packsswb(in_MM0,*in_EAX);
  bVar2 = (byte)((uint)in_EAX >> 8);
  bVar3 = (byte)((uint)unaff_EBX >> 8);
  bVar1 = bVar2 + bVar3;
  bVar5 = CARRY1(bVar2,bVar3) || CARRY1(bVar1,in_CF);
  bVar1 = bVar1 + in_CF;
  bVar3 = (byte)((uint)param_2 >> 8);
  bVar2 = bVar1 + bVar3;
  bVar6 = CARRY1(bVar1,bVar3) || CARRY1(bVar2,bVar5);
  bVar2 = bVar2 + bVar5;
  bVar3 = (byte)((uint)param_1 >> 8);
  bVar1 = bVar2 + bVar3;
  bVar5 = CARRY1(bVar2,bVar3) || CARRY1(bVar1,bVar6);
  bVar1 = bVar1 + bVar6;
  bVar6 = CARRY1(bVar1,bVar1) || CARRY1(bVar1 * '\x02',bVar5);
  bVar2 = bVar1 * '\x02' + bVar5;
  bVar1 = bVar2 + (byte)unaff_EBX;
  bVar5 = CARRY1(bVar2,(byte)unaff_EBX) || CARRY1(bVar1,bVar6);
  bVar1 = bVar1 + bVar6;
  bVar2 = bVar1 + (byte)param_2;
  bVar3 = bVar2 + bVar5;
  bVar4 = (byte)param_1;
  *(char *)(unaff_EBX + -0x761b71bc) =
       *(char *)(unaff_EBX + -0x761b71bc) + bVar4 +
       (CARRY1(bVar3,bVar4) ||
       CARRY1(bVar3 + bVar4,CARRY1(bVar1,(byte)param_2) || CARRY1(bVar2,bVar5)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


