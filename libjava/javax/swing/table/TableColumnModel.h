
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_table_TableColumnModel__
#define __javax_swing_table_TableColumnModel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class ListSelectionModel;
      namespace event
      {
          class TableColumnModelListener;
      }
      namespace table
      {
          class TableColumn;
          class TableColumnModel;
      }
    }
  }
}

class javax::swing::table::TableColumnModel : public ::java::lang::Object
{

public:
  virtual void addColumn(::javax::swing::table::TableColumn *) = 0;
  virtual void removeColumn(::javax::swing::table::TableColumn *) = 0;
  virtual void moveColumn(jint, jint) = 0;
  virtual void setColumnMargin(jint) = 0;
  virtual jint getColumnCount() = 0;
  virtual ::java::util::Enumeration * getColumns() = 0;
  virtual jint getColumnIndex(::java::lang::Object *) = 0;
  virtual ::javax::swing::table::TableColumn * getColumn(jint) = 0;
  virtual jint getColumnMargin() = 0;
  virtual jint getColumnIndexAtX(jint) = 0;
  virtual jint getTotalColumnWidth() = 0;
  virtual void setColumnSelectionAllowed(jboolean) = 0;
  virtual jboolean getColumnSelectionAllowed() = 0;
  virtual JArray< jint > * getSelectedColumns() = 0;
  virtual jint getSelectedColumnCount() = 0;
  virtual void setSelectionModel(::javax::swing::ListSelectionModel *) = 0;
  virtual ::javax::swing::ListSelectionModel * getSelectionModel() = 0;
  virtual void addColumnModelListener(::javax::swing::event::TableColumnModelListener *) = 0;
  virtual void removeColumnModelListener(::javax::swing::event::TableColumnModelListener *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_swing_table_TableColumnModel__