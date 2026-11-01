
/* ==== FUN_00446890 @ 00446890 ==== 
 * signature: undefined4 __register FUN_00446890(int param_1)
 * body: 00446890-004468c1
 */

undefined4 FUN_00446890(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = FUN_00447538(param_1);
  if ((char)uVar2 != '\0') {
    uVar3 = (undefined3)(uVar2 >> 8);
    if ((*(char *)(param_1 + 0x211) == '\x02') || (*(char *)(param_1 + 0x211) == '\x05')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
      uVar3 = 0;
    }
    if (cVar1 != *(char *)(param_1 + 0x1f8)) {
      return CONCAT31(uVar3,1);
    }
  }
  return 0;
}


