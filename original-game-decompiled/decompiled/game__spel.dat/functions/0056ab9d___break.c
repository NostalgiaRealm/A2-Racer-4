
/* ==== __break @ 0056ab9d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0056ab9d-0056ab9d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


