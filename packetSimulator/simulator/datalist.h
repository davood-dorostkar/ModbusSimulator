#ifndef DATALIST_H
#define DATALIST_H

#include <QObject>

class dataList
{
public:
    dataList();
    uint8_t RelayRequests[18][6]=
    {
        {0x64, 0x04, 0x00, 0x00, 0x00, 0x00},
         {0x64, 0x04, 0x00, 0x01, 0x00, 0x00},
         {0x64, 0x04, 0x00, 0x04, 0x00, 0x00},
         {0x64, 0x04, 0x00, 0x05, 0x00, 0x00},
         {0x64, 0x06, 0x00, 0x00, 0x00, 0x01},
        {0x64, 0x06, 0x00, 0x00, 0x00, 0x00},
         {0x64, 0x06, 0x00, 0x01, 0x00, 0x01},
        {0x64, 0x06, 0x00, 0x01, 0x00, 0x00},
         {0x64, 0x06, 0x00, 0x02, 0x00, 0x01},
         {0x64, 0x06, 0x00, 0x02, 0x00, 0x00},
         {0x64, 0x06, 0x00, 0x03, 0x00, 0x01},
        {0x64, 0x06, 0x00, 0x03, 0x00, 0x00},
        {0x64, 0x06, 0x00, 0x04, 0x00, 0x01},
        {0x64, 0x06, 0x00, 0x04, 0x00, 0x00},
        {0x64, 0x06, 0x00, 0x05, 0x00, 0x01},
       {0x64, 0x06, 0x00, 0x05, 0x00, 0x00},
        {0x64, 0x06, 0x00, 0x06, 0x00, 0x01},
         {0x64, 0x06, 0x00, 0x06, 0x00, 0x00}
    };
    uint8_t RelayResponses[18][6]=
    {
        {0x64, 0x04, 0x00, 0x00, 0x00, 0x0a},
         {0x64, 0x04, 0x00, 0x01, 0x00, 0x0b},
         {0x64, 0x04, 0x00, 0x04, 0x00, 0x0c},
         {0x64, 0x04, 0x00, 0x05, 0x00, 0x3f},
         {0x64, 0x06, 0x00, 0x00, 0x00, 0x01},
        {0x64, 0x06, 0x00, 0x00, 0x00, 0x00},
         {0x64, 0x06, 0x00, 0x01, 0x00, 0x01},
        {0x64, 0x06, 0x00, 0x01, 0x00, 0x00},
         {0x64, 0x06, 0x00, 0x02, 0x00, 0x01},
         {0x64, 0x06, 0x00, 0x02, 0x00, 0x00},
         {0x64, 0x06, 0x00, 0x03, 0x00, 0x01},
        {0x64, 0x06, 0x00, 0x03, 0x00, 0x00},
        {0x64, 0x06, 0x00, 0x04, 0x00, 0x01},
        {0x64, 0x06, 0x00, 0x04, 0x00, 0x00},
        {0x64, 0x06, 0x00, 0x05, 0x00, 0x01},
       {0x64, 0x06, 0x00, 0x05, 0x00, 0x00},
        {0x64, 0x06, 0x00, 0x06, 0x00, 0x01},
         {0x64, 0x06, 0x00, 0x06, 0x00, 0x00}
    };
    uint8_t MainboardRequests[16][6] =
        {
            {0x01, 0x06, 0x00, 0x00, 0x00, 0x63},
            {0x01, 0x06, 0x00, 0x01, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x01, 0x00, 0x00},
            {0x01, 0x06, 0x00, 0x02, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x03, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x04, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x05, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x06, 0x00, 0x02},
            {0x01, 0x06, 0x00, 0x15, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x1D, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x10, 0x00, 0x03},
            {0x01, 0x04, 0x00, 0x00, 0x00, 0x00},
            {0x01, 0x04, 0x00, 0x01, 0x00, 0x00},
            {0x01, 0x04, 0x00, 0x05, 0x00, 0x00},
            {0x01, 0x04, 0x00, 0x06, 0x00, 0x00},
            {0x01, 0x04, 0x00, 0x1D, 0x00, 0x00}};

    uint8_t MainboardResponses[16][6] =
        {
            {0x01, 0x06, 0x00, 0x00, 0x00, 0x63},
            {0x01, 0x06, 0x00, 0x01, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x01, 0x00, 0x00},
            {0x01, 0x06, 0x00, 0x02, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x03, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x04, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x05, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x06, 0x00, 0x02},
            {0x01, 0x06, 0x00, 0x15, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x1D, 0x00, 0x01},
            {0x01, 0x06, 0x00, 0x10, 0x00, 0x03},
            {0x01, 0x04, 0x00, 0x00, 0x00, 0x60},
            {0x01, 0x04, 0x00, 0x01, 0x00, 0x01},
            {0x01, 0x04, 0x00, 0x05, 0x00, 0x0a},
            {0x01, 0x04, 0x00, 0x06, 0x00, 0x08},
            {0x01, 0x04, 0x00, 0x1D, 0x00, 0x01}};

};

#endif // DATALIST_H
