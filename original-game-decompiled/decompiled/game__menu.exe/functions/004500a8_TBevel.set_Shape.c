
/* ==== TBevel.set_Shape @ 004500a8 ==== 
 * signature: undefined TBevel.set_Shape(void)
 * body: 004500a8-004500bb
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TBevel_set_Shape(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x129)) {
    *(char *)((int)param_1 + 0x129) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


