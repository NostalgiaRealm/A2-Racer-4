
/* ==== FUN_005536ab @ 005536ab ==== 
 * signature: undefined4 __thiscall FUN_005536ab(void * this, uint param_1, char param_2)
 * body: 005536ab-00553733
 */

uint __thiscall FUN_005536ab(void *this,uint param_1,char param_2)

{
  char cVar1;
  undefined2 *puVar2;
  uint in_EAX;
  char cVar3;
  
  if (0x7ffffffd < param_1) {
    in_EAX = FUN_0054b1b4();
  }
  puVar2 = *(undefined2 **)((int)this + 4);
  if (puVar2 == (undefined2 *)0x0) {
LAB_005536e9:
    if (param_1 != 0) {
      if (param_2 == '\0') {
        if (param_1 <= *(uint *)((int)this + 0xc)) goto LAB_0055372d;
      }
      else {
        in_EAX = *(uint *)((int)this + 0xc);
        if ((in_EAX < 0x20) && (param_1 <= in_EAX)) goto LAB_0055372d;
        FUN_00553734(this,'\x01');
      }
LAB_00553725:
      in_EAX = FUN_0055391c();
LAB_0055372d:
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    if (param_2 == '\0') {
      if (puVar2 != (undefined2 *)0x0) {
        *(undefined4 *)((int)this + 8) = 0;
        *puVar2 = 0;
      }
      goto LAB_005536e5;
    }
    cVar3 = '\x01';
  }
  else {
    cVar1 = *(char *)((int)puVar2 + -1);
    in_EAX = CONCAT31((int3)(in_EAX >> 8),cVar1);
    if ((cVar1 == '\0') || (cVar1 == -1)) goto LAB_005536e9;
    if (param_1 != 0) goto LAB_00553725;
    cVar3 = '\0';
    *(char *)((int)puVar2 + -1) = cVar1 + -1;
  }
  in_EAX = FUN_00553734(this,cVar3);
LAB_005536e5:
  return in_EAX & 0xffffff00;
}


